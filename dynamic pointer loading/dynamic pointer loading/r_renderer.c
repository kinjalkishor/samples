#include "r_renderer.h"
#include "r_d3d11.h"
#include "r_gl4.h"

#include <stdlib.h>


renderer_init(struct renderer *rs, enum renderer_type api) {
	if (api == RT_D3D11) {
		rs->init = d3d11_init;
		rs->render = d3d11_render;
		rs->deinit = d3d11_deinit;
		printf("D3D11 Renderer API selected\n");
	} else if (api == RT_GL4) {
		rs->init = gl4_init;
		rs->render = gl4_render;
		rs->deinit = gl4_deinit;
		printf("GL4 Renderer API selected\n");
	} else {
		printf("This Renderer API is not implemented\n");
	}
}

renderer_deinit(struct renderer *rs) {
	rs->init = NULL;
	rs->render = NULL;
	rs->deinit = NULL;
}
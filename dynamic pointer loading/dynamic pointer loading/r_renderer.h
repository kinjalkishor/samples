#pragma once

enum renderer_type {
	RT_D3D11,
	RT_GL4
};

struct renderer {
	void (*init)();
	void (*render)();
	void (*deinit)();
};


// Render System API loading functions.
renderer_init(struct renderer *rs, enum renderer_type api);
renderer_deinit(struct renderer *rs);
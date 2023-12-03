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

extern struct renderer rs;

// Render System API loading functions.
renderer_init(enum renderer_type api);
renderer_deinit();
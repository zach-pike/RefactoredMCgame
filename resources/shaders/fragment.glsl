#version 330 core

// Interpolated values from the vertex shaders
in vec2 UV;

// Ouput data
out vec3 color;

// Values that stay constant for the whole mesh.
uniform sampler2D myTextureSampler;

void main() {
	// Output color = color of the texture at the specified UV
	color = texture(myTextureSampler, vec2((UV.x + 1.3125) * 0.0625, 1 - (UV.y * 0.0625))).rgb;
}
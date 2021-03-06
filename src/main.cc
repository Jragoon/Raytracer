#include <iostream>
#include <memory>
#include <fstream>
#include <raytracer.h>
#include <geometry.h>

std::vector<Sphere> objects;
std::vector<Light> lights;

int main() {
	Material ivory(Vec3f(0.4, 0.4, 0.3), Vec3f(0.6, 0.3, 0.1), 50.0f);
	Material red_rubber(Vec3f(0.3, 0.1, 0.1), Vec3f(0.9, 0.1, 0.0), 10.0f);
	Material mirror(Vec3f(1.0, 1.0, 1.0), Vec3f(0, 10.0, 0.8), 1425.0f);
	
	objects.emplace_back(Sphere(Vec3f(-10, 0, -20), 3, ivory));
	objects.emplace_back(Sphere(Vec3f(5.0, 7, -15), 5, mirror));
	objects.emplace_back(Sphere(Vec3f(-2, -5, -20), 3, red_rubber));
	objects.emplace_back(Sphere(Vec3f(-8, -3, -25), 3, mirror));
	objects.emplace_back(Sphere(Vec3f(0, 10, -30), 4, mirror));
	objects.emplace_back(Sphere(Vec3f(5, -3, -10), 3, red_rubber));
	
	lights.emplace_back(Vec3f(-20, 20, 20), 1.5);
	lights.emplace_back(Vec3f(30, 50, -25), 1.8);
	lights.emplace_back(Vec3f(30, 20, 30), 1.7);

	Raytracer::render();

	exit(EXIT_SUCCESS);
}
#include <iostream>
#include <memory>
#include <fstream>
#include <Raytracer.hh>
#include <Geometry.hh>

int main() {
	Material ivory(Vec3f(0.4, 0.4, 0.3));
	Material red_rubber(Vec3f(0.3, 0.1, 0.1));

	std::vector<Sphere> spheres;
	spheres.emplace_back(Sphere(Vec3f(-3, 0, -16), 2, ivory));
	spheres.emplace_back(Sphere(Vec3f(-1.0, -1.5, -12), 2, red_rubber));
	spheres.emplace_back(Sphere(Vec3f(1.5, -0.5, -18), 3, red_rubber));
	spheres.emplace_back(Sphere(Vec3f(7, 5, -18), 4, ivory));

	std::unique_ptr<Raytracer> raytracer = std::make_unique<Raytracer>();
	raytracer->render(spheres);

	exit(EXIT_SUCCESS);
}
#pragma once

#include <vector>
#include "vmath\vmath.h"
#include "Quatf.h"

struct Joint;

class AnimationKeyFrame
{
public:
	std::vector<Quatf> orientations;

	AnimationKeyFrame();
	~AnimationKeyFrame();

	auto capture(const std::vector<Joint>& joints) -> void;
};


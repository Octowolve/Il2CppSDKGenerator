#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class TimeRange
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "TimeRange"));
	}

	template <typename T = float> T& startTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& duration() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}

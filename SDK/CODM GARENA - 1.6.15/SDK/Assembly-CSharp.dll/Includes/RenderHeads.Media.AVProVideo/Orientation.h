#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Orientation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Orientation"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Landscape() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LandscapeFlipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Portrait() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& PortraitFlipped() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

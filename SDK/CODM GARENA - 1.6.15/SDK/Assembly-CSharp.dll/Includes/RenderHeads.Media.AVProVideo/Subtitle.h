#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RenderHeads.Media.AVProVideo {

class Subtitle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RenderHeads.Media.AVProVideo", "Subtitle"));
	}

	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& timeStartMs() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& timeEndMs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBefore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T IsBefore(float time) {
		return ((T (*)(Subtitle*, float))(Il2CppBase() + 0x41272A0))(this, time);
	}
	template <typename T = bool> T IsTime(float time) {
		return ((T (*)(Subtitle*, float))(Il2CppBase() + 0x410F364))(this, time);
	}

};

}

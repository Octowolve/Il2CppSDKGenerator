#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TubeRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TubeRenderer"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& vertices() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& crossSegments() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& crossPoints() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& lastCrossSegments() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& flatAtDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& lastCameraPosition1() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& lastCameraPosition2() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& movePixelsForRebuild() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& maxRebuildTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& lastRebuildTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(TubeRenderer*))(Il2CppBase() + 0x4AF7F78))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(TubeRenderer*))(Il2CppBase() + 0x4AF8370))(this);
	}

};

}

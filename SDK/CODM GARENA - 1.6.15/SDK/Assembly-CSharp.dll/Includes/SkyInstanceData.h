#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SkyInstanceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SkyInstanceData"));
	}

	template <typename T = Il2CppVector3> T& pos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppVector3> T& eulerAngles() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppVector3> T& scale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& boundingSphereRadius() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& matrix() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& boundingSphereIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& visible() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

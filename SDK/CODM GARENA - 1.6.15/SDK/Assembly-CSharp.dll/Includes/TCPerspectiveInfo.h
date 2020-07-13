#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TCPerspectiveInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TCPerspectiveInfo"));
	}

	template <typename T = float> static T& Duration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& ExposedPawnId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& ScenePosition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FacePicturePop
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FacePicturePop"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTLogArgs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(FacePicturePop*))(Il2CppBase() + 0x467580C))(this);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetTLogArgs(int32_t id, int32_t type, int32_t jump) {
		return ((T (*)(FacePicturePop*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x4675884))(this, id, type, jump);
	}

};

}

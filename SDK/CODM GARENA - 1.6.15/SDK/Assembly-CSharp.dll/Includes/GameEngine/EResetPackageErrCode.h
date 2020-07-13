#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class EResetPackageErrCode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "EResetPackageErrCode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& E_RESET_PACKAGE_ERR_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_RESET_PACKAGE_ERR_REACH_MAX_TIMES() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_RESET_PACKAGE_ERR_NO_PACKAGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& E_RESET_PACKAGE_ERR_NO_BUFF() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

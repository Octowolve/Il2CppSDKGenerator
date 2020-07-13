#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class SkipStepReason
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "SkipStepReason"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_UNKNOWN_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_M4_NOT_RECEIVED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_M4_NOT_FOUND_OR_LOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_SETTLEMENTDATA_NOT_RECEIVED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_LATHEL_NOT_FOUND_OR_LOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_OPTIC_NOT_FOUND_OR_LOCK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_SIGN_NOT_RECEIVED_OR_HAS_CLAIMED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_GETPRIZE_PROPS_NULLOREMPTY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_GET_EXPCARD_BATTLEPASSDATA_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_BUYM4_M4_NOT_FOUND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_SIGN_OUT_OF_PERIOD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& LOC_FTUE_WEAPON_UPGRADE_ERROR() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class EOpenBoxResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "EOpenBoxResult"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_SUCC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_CANT_PICKUP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_TYPE_INVALID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_NOT_CLEAN_ZM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_OEPNED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_CANT_FIND_AIRBOX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& eOPEN_BOX_RESULT_AIRBOX_OEPNED() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

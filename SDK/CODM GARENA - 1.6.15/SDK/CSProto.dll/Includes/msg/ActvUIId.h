#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActvUIId
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActvUIId"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_UI_RANK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_UI_ACHIEVEMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_UI_MEDAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& ACTV_UI_PERSONAL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

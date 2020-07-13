#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class EnmLangCodeType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "EnmLangCodeType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& CODE_TYPE_DEFAULT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CODE_TYPE_IS_BASE64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CODE_TYPE_IS_NOT_BASE64() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

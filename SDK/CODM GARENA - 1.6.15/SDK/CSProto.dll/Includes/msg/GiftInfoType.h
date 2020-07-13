#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GiftInfoType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GiftInfoType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& GIFT_TYPE_ASK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& GIFT_TYPE_SEND() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

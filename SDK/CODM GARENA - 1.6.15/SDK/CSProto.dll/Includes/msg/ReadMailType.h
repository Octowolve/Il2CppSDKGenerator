#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ReadMailType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ReadMailType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& READ_MAIL_TYPE_READ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& READ_MAIL_TYPE_CONFRIM() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& READ_MAIL_TYPE_TAKE_ATTCHMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

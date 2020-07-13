#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ETicketJoinSource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ETicketJoinSource"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& enmOther() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& enmJoinDirect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& enmOneKeyFirstPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& enmOneKeySecondPhase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

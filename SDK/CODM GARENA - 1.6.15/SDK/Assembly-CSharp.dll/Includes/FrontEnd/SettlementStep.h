#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SettlementStep
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SettlementStep"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_SETP_WINNERCIRCLE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_SETP_EXP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_SETP_BP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& SETTLEMENT_SETP_RANK() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}

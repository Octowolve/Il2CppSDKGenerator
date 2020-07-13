#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportClickRechargeStallData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportClickRechargeStallData"));
	}

	template <typename T = Il2CppString*> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ChargeCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_PlayerId() {
		return ((T (*)(ReportClickRechargeStallData*))(Il2CppBase() + 0x23C14CC))(this);
	}
	template <typename T = void> T set_PlayerId(Il2CppString* value) {
		return ((T (*)(ReportClickRechargeStallData*, Il2CppString*))(Il2CppBase() + 0x235E274))(this, value);
	}
	template <typename T = Il2CppString*> T get_Level() {
		return ((T (*)(ReportClickRechargeStallData*))(Il2CppBase() + 0x23C14D4))(this);
	}
	template <typename T = void> T set_Level(Il2CppString* value) {
		return ((T (*)(ReportClickRechargeStallData*, Il2CppString*))(Il2CppBase() + 0x235E27C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ChargeCount() {
		return ((T (*)(ReportClickRechargeStallData*))(Il2CppBase() + 0x23C14DC))(this);
	}
	template <typename T = void> T set_ChargeCount(Il2CppString* value) {
		return ((T (*)(ReportClickRechargeStallData*, Il2CppString*))(Il2CppBase() + 0x235E284))(this, value);
	}

};

}

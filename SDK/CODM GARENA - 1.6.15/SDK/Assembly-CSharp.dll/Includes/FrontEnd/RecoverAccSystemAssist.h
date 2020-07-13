#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class RecoverAccSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "RecoverAccSystemAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AccountRecoverRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountRecoverResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T AccountRecoverRequest() {
		return ((T (*)(RecoverAccSystemAssist*))(Il2CppBase() + 0x3842B60))(this);
	}
	template <typename T = void> T OnAccountRecoverResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(RecoverAccSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3842D60))(this, message, err);
	}

};

}

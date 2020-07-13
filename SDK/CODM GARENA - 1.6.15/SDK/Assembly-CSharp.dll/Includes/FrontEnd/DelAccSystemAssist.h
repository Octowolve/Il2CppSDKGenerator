#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class DelAccSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "DelAccSystemAssist"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AccountDeleteRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAccountDeleteResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T AccountDeleteRequest() {
		return ((T (*)(DelAccSystemAssist*))(Il2CppBase() + 0x36735E8))(this);
	}
	template <typename T = void> T OnAccountDeleteResponse(uintptr_t message, uintptr_t* err) {
		return ((T (*)(DelAccSystemAssist*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3673C9C))(this, message, err);
	}

};

}

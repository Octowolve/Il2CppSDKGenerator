#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsMatchJumpSystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsMatchJumpSystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqMatchJumpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResActvMatchJumpData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T ReqMatchJumpData() {
		return ((T (*)(LiveOpsMatchJumpSystemAssist*))(Il2CppBase() + 0x3503200))(this);
	}
	template <typename T = bool> T OnResActvMatchJumpData(uintptr_t Msg) {
		return ((T (*)(LiveOpsMatchJumpSystemAssist*, uintptr_t))(Il2CppBase() + 0x3503330))(this, Msg);
	}

};

}

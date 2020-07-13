#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISettlementCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISettlementCard"));
	}


	template <typename T = bool> T SetData(uintptr_t data, bool isChestCard) {
		return ((T (*)(ISettlementCard*, uintptr_t, bool))(Il2CppBase() + 0x0))(this, data, isChestCard);
	}
	template <typename T = void> T SetActive(bool active) {
		return ((T (*)(ISettlementCard*, bool))(Il2CppBase() + 0x0))(this, active);
	}
	template <typename T = void> T AddPlayEndCallback(void* action) {
		return ((T (*)(ISettlementCard*, void*))(Il2CppBase() + 0x0))(this, action);
	}
	template <typename T = void> T ExecutePlayEndCallback() {
		return ((T (*)(ISettlementCard*))(Il2CppBase() + 0x0))(this);
	}

};

}

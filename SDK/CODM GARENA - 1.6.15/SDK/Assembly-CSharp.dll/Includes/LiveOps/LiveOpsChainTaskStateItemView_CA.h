#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class LiveOpsChainTaskStateItemViewCA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "LiveOpsChainTaskStateItemView_CA"));
	}

	template <typename T = uintptr_t> T& SelectedState() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& DescState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LockState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& ProcessingState() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& FinishedState() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ClaimedState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_StateItemList() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_CurStateType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddChainTaskStateItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_CurStateType() {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*))(Il2CppBase() + 0x34DDB50))(this);
	}
	template <typename T = void> T set_CurStateType(uintptr_t value) {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*, uintptr_t))(Il2CppBase() + 0x34DD000))(this, value);
	}
	template <typename T = bool> T get_bSelected() {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*))(Il2CppBase() + 0x34DDB58))(this);
	}
	template <typename T = void> T set_bSelected(bool value) {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*, bool))(Il2CppBase() + 0x34DD1F0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*))(Il2CppBase() + 0x34DDC04))(this);
	}
	template <typename T = void> T AddChainTaskStateItem(uintptr_t inObj, uintptr_t inType) {
		return ((T (*)(LiveOpsChainTaskStateItemViewCA*, uintptr_t, uintptr_t))(Il2CppBase() + 0x34DDD44))(this, inObj, inType);
	}

};

}

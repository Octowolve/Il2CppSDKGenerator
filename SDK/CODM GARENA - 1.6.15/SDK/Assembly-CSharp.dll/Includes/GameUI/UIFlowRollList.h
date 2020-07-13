#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIFlowRollList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIFlowRollList"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& mQueue() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& mHead() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& mTail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& mCapacity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mStarted() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& mRevert() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnsureCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RollNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RollLast() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Next() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_End() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCellQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T EnsureCapacity() {
		return ((T (*)(UIFlowRollList*))(Il2CppBase() + 0x3AE30C4))(this);
	}
	template <typename T = int32_t> T RollNext(int32_t index) {
		return ((T (*)(UIFlowRollList*, int32_t))(Il2CppBase() + 0x3AE3374))(this, index);
	}
	template <typename T = int32_t> T RollLast(int32_t index) {
		return ((T (*)(UIFlowRollList*, int32_t))(Il2CppBase() + 0x3AE3424))(this, index);
	}
	template <typename T = bool> T Next(int32_t row, uintptr_t* output) {
		return ((T (*)(UIFlowRollList*, int32_t, uintptr_t*))(Il2CppBase() + 0x3AE34D8))(this, row, output);
	}
	template <typename T = void> T Start(bool revert) {
		return ((T (*)(UIFlowRollList*, bool))(Il2CppBase() + 0x3AE38F4))(this, revert);
	}
	template <typename T = void> T End(bool culling) {
		return ((T (*)(UIFlowRollList*, bool))(Il2CppBase() + 0x3AE39A4))(this, culling);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCellQueue() {
		return ((T (*)(UIFlowRollList*))(Il2CppBase() + 0x3AE3B84))(this);
	}

};

}

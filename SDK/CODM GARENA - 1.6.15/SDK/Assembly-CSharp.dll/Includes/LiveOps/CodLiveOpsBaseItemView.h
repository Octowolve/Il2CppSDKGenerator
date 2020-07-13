#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiveOps {

class CodLiveOpsBaseItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiveOps", "CodLiveOpsBaseItemView"));
	}

	template <typename T = uintptr_t> T& LabelDesc() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_Data() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uint64_t> T& m_SeqId() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RewardItems() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& ContainerRewards() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRewardContainerLocation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(CodLiveOpsBaseItemView*))(Il2CppBase() + 0x3534378))(this);
	}
	template <typename T = uint64_t> T get_SeqId() {
		return ((T (*)(CodLiveOpsBaseItemView*))(Il2CppBase() + 0x3534380))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, int32_t minWidth) {
		return ((T (*)(CodLiveOpsBaseItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3534388))(this, data, minWidth);
	}
	template <typename T = void> T SetRewards(int32_t minWidth) {
		return ((T (*)(CodLiveOpsBaseItemView*, int32_t))(Il2CppBase() + 0x3534670))(this, minWidth);
	}
	template <typename T = void> T SetRewardContainerLocation(int32_t count) {
		return ((T (*)(CodLiveOpsBaseItemView*, int32_t))(Il2CppBase() + 0x3535360))(this, count);
	}

};

}

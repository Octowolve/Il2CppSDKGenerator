#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class TrainingTaskContentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "TrainingTaskContentData"));
	}

	template <typename T = int32_t> T& groupID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& contentDesc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& firstTab() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& secondTab() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& thirdTab() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& progressValue() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ProgressTarget() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isShowRed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetState(uintptr_t infoState) {
		return ((T (*)(TrainingTaskContentData*, uintptr_t))(Il2CppBase() + 0x2996D34))(this, infoState);
	}
	template <typename T = uintptr_t> T get_state() {
		return ((T (*)(TrainingTaskContentData*))(Il2CppBase() + 0x2996DF8))(this);
	}
	template <typename T = void> T set_state(uintptr_t value) {
		return ((T (*)(TrainingTaskContentData*, uintptr_t))(Il2CppBase() + 0x299838C))(this, value);
	}

};

}

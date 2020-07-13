#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace MileStone {

class MileStoneDetailItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "MileStone", "MileStoneDetailItemView"));
	}

	template <typename T = uintptr_t> T& labelTaskDesc() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& labelScorePerCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& labelCount() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LableSum() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEasyListData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetEasyListData(uintptr_t data, int32_t idFromZero) {
		return ((T (*)(MileStoneDetailItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x41DD6AC))(this, data, idFromZero);
	}

};

}

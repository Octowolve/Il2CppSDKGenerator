#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSingleMemberItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSingleMemberItemView"));
	}

	template <typename T = uintptr_t> T& ContainerInfo() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& WidgetAdapt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& item() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T AdaptSize(int32_t width) {
		return ((T (*)(BRSingleMemberItemView*, int32_t))(Il2CppBase() + 0x1B23308))(this, width);
	}
	template <typename T = void> T SetData(int32_t index, bool bHide, uintptr_t info, uint32_t maxPlayerCount, uint32_t maxAiPlayerCount, uint64_t roomOnwerPlayerId) {
		return ((T (*)(BRSingleMemberItemView*, int32_t, bool, uintptr_t, uint32_t, uint32_t, uint64_t))(Il2CppBase() + 0x1B230AC))(this, index, bHide, info, maxPlayerCount, maxAiPlayerCount, roomOnwerPlayerId);
	}

};

}

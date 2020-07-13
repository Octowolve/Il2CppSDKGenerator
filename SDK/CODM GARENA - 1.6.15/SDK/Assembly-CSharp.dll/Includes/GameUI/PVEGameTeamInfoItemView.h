#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PVEGameTeamInfoItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PVEGameTeamInfoItemView"));
	}

	template <typename T = uint32_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& m_Score() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Score() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BG() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVEGameTeamInfoItemView*))(Il2CppBase() + 0x3AA04D4))(this);
	}
	template <typename T = uint32_t> T get_PlayerId() {
		return ((T (*)(PVEGameTeamInfoItemView*))(Il2CppBase() + 0x3AA057C))(this);
	}
	template <typename T = void> T set_PlayerId(uint32_t value) {
		return ((T (*)(PVEGameTeamInfoItemView*, uint32_t))(Il2CppBase() + 0x3AA0584))(this, value);
	}
	template <typename T = int32_t> T get_PlayerScore() {
		return ((T (*)(PVEGameTeamInfoItemView*))(Il2CppBase() + 0x3AA058C))(this);
	}
	template <typename T = void> T set_PlayerScore(int32_t value) {
		return ((T (*)(PVEGameTeamInfoItemView*, int32_t))(Il2CppBase() + 0x3AA0594))(this, value);
	}
	template <typename T = void> T SetData(uintptr_t pi, int32_t idx) {
		return ((T (*)(PVEGameTeamInfoItemView*, uintptr_t, int32_t))(Il2CppBase() + 0x3AA059C))(this, pi, idx);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVEGameTeamInfoItemView*))(Il2CppBase() + 0x3AA0720))(this);
	}

};

}

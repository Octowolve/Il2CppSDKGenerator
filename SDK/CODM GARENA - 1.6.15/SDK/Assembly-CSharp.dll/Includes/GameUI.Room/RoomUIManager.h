#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomUIManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomUIManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_BRSquadBgColorList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& DEFAULT_COLOR() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_BRSquadBgInit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& m_MatchType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<int32_t>*> T& m_BrRoomCreatePlayerList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBrSquadBGColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrSquadBgColorBySquadIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrRoomCreatePlayerListCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T ReadBrSquadBGColor() {
		return ((T (*)(RoomUIManager*))(Il2CppBase() + 0x2132EC8))(this);
	}
	template <typename T = uintptr_t> T GetBrSquadBgColorBySquadIndex(int32_t index) {
		return ((T (*)(RoomUIManager*, int32_t))(Il2CppBase() + 0x2133154))(this, index);
	}
	template <typename T = int32_t> T GetBrRoomCreatePlayerListCount(int32_t matchType) {
		return ((T (*)(RoomUIManager*, int32_t))(Il2CppBase() + 0x21332CC))(this, matchType);
	}

};

}

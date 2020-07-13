#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomMemberZMBuffItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomMemberZMBuffItem"));
	}

	template <typename T = uint64_t> T& m_PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& IconTemplate() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& IconTable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CacheIconList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& BindTransform() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& mScreenScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayerId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBuffs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBindTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uint64_t> T PlayerId() {
		return ((T (*)(RoomMemberZMBuffItem*))(Il2CppBase() + 0x20F9B88))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(RoomMemberZMBuffItem*))(Il2CppBase() + 0x20F9C28))(this);
	}
	template <typename T = void> T SetBuffs(uint64_t playerId, Il2CppList<uintptr_t>* buffs) {
		return ((T (*)(RoomMemberZMBuffItem*, uint64_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x20F9DDC))(this, playerId, buffs);
	}
	template <typename T = void> T SetBindTransform(uintptr_t bind) {
		return ((T (*)(RoomMemberZMBuffItem*, uintptr_t))(Il2CppBase() + 0x20FA3E0))(this, bind);
	}
	template <typename T = void> T Update() {
		return ((T (*)(RoomMemberZMBuffItem*))(Il2CppBase() + 0x20FA488))(this);
	}

};

}

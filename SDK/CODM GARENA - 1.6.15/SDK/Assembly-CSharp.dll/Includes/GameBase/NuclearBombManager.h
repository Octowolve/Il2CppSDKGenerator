#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class NuclearBombManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "NuclearBombManager"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_NuclearBombMap() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_ExplodeEffect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_ReplayExplodeEffect() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Contains() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Shutdown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveNuclearBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateNuclearBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerNuclearBombExplode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopNuclearBombExplodeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TriggerNuclearBombExplodeForReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StopNuclearBombExplodeForReplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T get_NuclearBombMap() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DDF34))(this);
	}
	template <typename T = bool> T Contains(int32_t actorID) {
		return ((T (*)(NuclearBombManager*, int32_t))(Il2CppBase() + 0x19DDF3C))(this, actorID);
	}
	template <typename T = void> T Shutdown() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DE018))(this);
	}
	template <typename T = void> T OnRoundEnd() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DE3F4))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DE0BC))(this);
	}
	template <typename T = void> T RemoveNuclearBomb(int32_t actorID) {
		return ((T (*)(NuclearBombManager*, int32_t))(Il2CppBase() + 0x19DE498))(this, actorID);
	}
	template <typename T = void> T CreateNuclearBomb(uintptr_t content) {
		return ((T (*)(NuclearBombManager*, uintptr_t))(Il2CppBase() + 0x19DE6B8))(this, content);
	}
	template <typename T = void> T TriggerNuclearBombExplode(uintptr_t content) {
		return ((T (*)(NuclearBombManager*, uintptr_t))(Il2CppBase() + 0x19DEB38))(this, content);
	}
	template <typename T = void> T StopNuclearBombExplodeEffect() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DF0AC))(this);
	}
	template <typename T = void> T TriggerNuclearBombExplodeForReplay(Il2CppVector3 position, float duration) {
		return ((T (*)(NuclearBombManager*, Il2CppVector3, float))(Il2CppBase() + 0x19DF20C))(this, position, duration);
	}
	template <typename T = void> T StopNuclearBombExplodeForReplay() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DF50C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Shutdown() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DF66C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd() {
		return ((T (*)(NuclearBombManager*))(Il2CppBase() + 0x19DF674))(this);
	}

};

}

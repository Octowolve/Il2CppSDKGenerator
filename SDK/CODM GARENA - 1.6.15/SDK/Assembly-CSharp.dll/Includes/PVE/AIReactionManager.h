#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AIReactionManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AIReactionManager"));
	}

	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& m_ChannelMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AIReactions() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_PerceptionTypeCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_PerceptionActivity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Subscribe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetChannelFor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NudgeChannel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableAllPerceptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisablePerception() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnablePerception() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RestorePerceptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableAllPerceptions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnsuppressAllReactions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncomingDamage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IncomingSeePlayer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T RegisterChannel(uintptr_t channel) {
		return ((T (*)(AIReactionManager*, uintptr_t))(Il2CppBase() + 0x49B32BC))(this, channel);
	}
	template <typename T = void> T Subscribe(uintptr_t channelType, uintptr_t reaction) {
		return ((T (*)(AIReactionManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x49B4170))(this, channelType, reaction);
	}
	template <typename T = uintptr_t> T GetChannelFor(uintptr_t pt) {
		return ((T (*)(AIReactionManager*, uintptr_t))(Il2CppBase() + 0x49B496C))(this, pt);
	}
	template <typename T = void> T NudgeChannel(uint32_t eventInstigatorID, uintptr_t pt) {
		return ((T (*)(AIReactionManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B4A6C))(this, eventInstigatorID, pt);
	}
	template <typename T = Il2CppList<uintptr_t>*> T DisableAllPerceptions() {
		return ((T (*)(AIReactionManager*))(Il2CppBase() + 0x49B4B84))(this);
	}
	template <typename T = void> T DisablePerception(uintptr_t pt) {
		return ((T (*)(AIReactionManager*, uintptr_t))(Il2CppBase() + 0x49B4D28))(this, pt);
	}
	template <typename T = void> T EnablePerception(uintptr_t pt) {
		return ((T (*)(AIReactionManager*, uintptr_t))(Il2CppBase() + 0x49B4E04))(this, pt);
	}
	template <typename T = void> T RestorePerceptions(Il2CppList<uintptr_t>* perceptionTpyes) {
		return ((T (*)(AIReactionManager*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x49B4EE0))(this, perceptionTpyes);
	}
	template <typename T = void> T EnableAllPerceptions() {
		return ((T (*)(AIReactionManager*))(Il2CppBase() + 0x49B4878))(this);
	}
	template <typename T = void> T SuppressAllReactions() {
		return ((T (*)(AIReactionManager*))(Il2CppBase() + 0x49A76C0))(this);
	}
	template <typename T = void> T UnsuppressAllReactions() {
		return ((T (*)(AIReactionManager*))(Il2CppBase() + 0x49A78F0))(this);
	}
	template <typename T = void> T IncomingDamage(uint32_t instigatorID, uintptr_t hitInfo) {
		return ((T (*)(AIReactionManager*, uint32_t, uintptr_t))(Il2CppBase() + 0x49B5038))(this, instigatorID, hitInfo);
	}
	template <typename T = void> T IncomingSeePlayer(uintptr_t InPawn) {
		return ((T (*)(AIReactionManager*, uintptr_t))(Il2CppBase() + 0x49B5168))(this, InPawn);
	}

};

}

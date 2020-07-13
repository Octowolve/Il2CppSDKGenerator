#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRChatDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRChatDataStore"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& shortcutDic() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& shortcutAudioMaleDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> T& shortcutAudioFemaleDic() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& historyList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& shorcutList() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& shortCutSpecialList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<int32_t>*> T& ItemIDList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShortcutIDList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShortcutListSpecial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShortcutList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> T get_Msg() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F10FC))(this);
	}
	template <typename T = void> T set_Msg(Il2CppString* value) {
		return ((T (*)(BRChatDataStore*, Il2CppString*))(Il2CppBase() + 0x24F1104))(this, value);
	}
	template <typename T = uintptr_t> T get_scdm() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F110C))(this);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F11A8))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T GetShortcutIDList(uintptr_t tag) {
		return ((T (*)(BRChatDataStore*, uintptr_t))(Il2CppBase() + 0x24EB938))(this, tag);
	}
	template <typename T = void> T GetShortcutListSpecial(Il2CppList<Il2CppString*>* ShortcutList) {
		return ((T (*)(BRChatDataStore*, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x24F140C))(this, ShortcutList);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T GetShortcutList(uintptr_t tag) {
		return ((T (*)(BRChatDataStore*, uintptr_t))(Il2CppBase() + 0x24E5E7C))(this, tag);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F1894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F1974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Clear() {
		return ((T (*)(BRChatDataStore*))(Il2CppBase() + 0x24F197C))(this);
	}

};

}

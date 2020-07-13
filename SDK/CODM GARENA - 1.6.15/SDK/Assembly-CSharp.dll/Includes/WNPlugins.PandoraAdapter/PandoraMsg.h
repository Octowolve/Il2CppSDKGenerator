#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WNPlugins.PandoraAdapter {

class PandoraMsg
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WNPlugins.PandoraAdapter", "PandoraMsg"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& m_Body() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_PandoraMsg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPairs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendToPandora() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AllocPandoraMsg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(PandoraMsg*))(Il2CppBase() + 0x4A59A64))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(PandoraMsg*))(Il2CppBase() + 0x4A59B38))(this);
	}
	template <typename T = void> T AddPairs(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(PandoraMsg*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4A590F8))(this, key, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetDictionary() {
		return ((T (*)(PandoraMsg*))(Il2CppBase() + 0x4A59C60))(this);
	}
	template <typename T = void> T SendToPandora(uintptr_t msg) {
		return ((T (*)(PandoraMsg*, uintptr_t))(Il2CppBase() + 0x4A591EC))(this, msg);
	}
	template <typename T = uintptr_t> T AllocPandoraMsg() {
		return ((T (*)(PandoraMsg*))(Il2CppBase() + 0x4A59D00))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_ToString() {
		return ((T (*)(PandoraMsg*))(Il2CppBase() + 0x4A59DD0))(this);
	}

};

}

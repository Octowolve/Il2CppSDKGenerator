#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsChatData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsChatData"));
	}

	template <typename T = Il2CppString*> T& _titleLOC() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& msgType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& uiTabLabel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> T& uiMsgMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<int32_t>*> T& defaultList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMsgListByKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(SettingsChatData*, Il2CppString*))(Il2CppBase() + 0x255B628))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(SettingsChatData*))(Il2CppBase() + 0x255B64C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetMsgListByKey(int32_t key) {
		return ((T (*)(SettingsChatData*, int32_t))(Il2CppBase() + 0x255B65C))(this, key);
	}

};

}

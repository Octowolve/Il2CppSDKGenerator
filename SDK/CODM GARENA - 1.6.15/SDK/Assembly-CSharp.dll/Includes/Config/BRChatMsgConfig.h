#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class BRChatMsgConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "BRChatMsgConfig"));
	}

	template <typename T = int32_t> T& MsgID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& ShortcutMsg() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ShortcutMsgAudioMale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ShortcutMsgAudioFemale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& BRType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& TDMType() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FLType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DOMType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& HPType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& SDAType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& SDDType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ZBType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& CATType() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBRMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTDMMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFLMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDOMMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHPMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSDAMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSDDMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCATMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZBMsgMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T GetAllMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D437E8))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetBRMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D43990))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetTDMMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D43C78))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetFLMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D43F60))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetDOMMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D44248))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetHPMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D44530))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetSDAMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D44818))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetSDDMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D44C40))(0);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetCATMsgMap(int32_t CATMsgType) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x2D45058))(0, CATMsgType);
	}
	template <typename T = Il2CppDictionary<int32_t, Il2CppList<uintptr_t>*>*> static T GetZBMsgMap() {
		return ((T (*)(void *))(Il2CppBase() + 0x2D45354))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D4563C))(this);
	}
	template <typename T = int32_t> T get_MsgID() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D43988))(this);
	}
	template <typename T = void> T set_MsgID(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D456DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShortcutMsg() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D456E4))(this);
	}
	template <typename T = void> T set_ShortcutMsg(Il2CppString* value) {
		return ((T (*)(BRChatMsgConfig*, Il2CppString*))(Il2CppBase() + 0x2D456EC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShortcutMsgAudioMale() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D456F4))(this);
	}
	template <typename T = void> T set_ShortcutMsgAudioMale(Il2CppString* value) {
		return ((T (*)(BRChatMsgConfig*, Il2CppString*))(Il2CppBase() + 0x2D456FC))(this, value);
	}
	template <typename T = Il2CppString*> T get_ShortcutMsgAudioFemale() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D45704))(this);
	}
	template <typename T = void> T set_ShortcutMsgAudioFemale(Il2CppString* value) {
		return ((T (*)(BRChatMsgConfig*, Il2CppString*))(Il2CppBase() + 0x2D4570C))(this, value);
	}
	template <typename T = int32_t> T get_BRType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D43C70))(this);
	}
	template <typename T = void> T set_BRType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D45714))(this, value);
	}
	template <typename T = int32_t> T get_TDMType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D43F58))(this);
	}
	template <typename T = void> T set_TDMType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D4571C))(this, value);
	}
	template <typename T = int32_t> T get_FLType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D44240))(this);
	}
	template <typename T = void> T set_FLType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D45724))(this, value);
	}
	template <typename T = int32_t> T get_DOMType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D44528))(this);
	}
	template <typename T = void> T set_DOMType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D4572C))(this, value);
	}
	template <typename T = int32_t> T get_HPType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D44810))(this);
	}
	template <typename T = void> T set_HPType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D45734))(this, value);
	}
	template <typename T = int32_t> T get_SDAType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D44C30))(this);
	}
	template <typename T = void> T set_SDAType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D4573C))(this, value);
	}
	template <typename T = int32_t> T get_SDDType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D44C38))(this);
	}
	template <typename T = void> T set_SDDType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D45744))(this, value);
	}
	template <typename T = int32_t> T get_ZBType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D45634))(this);
	}
	template <typename T = void> T set_ZBType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D4574C))(this, value);
	}
	template <typename T = int32_t> T get_CATType() {
		return ((T (*)(BRChatMsgConfig*))(Il2CppBase() + 0x2D4534C))(this);
	}
	template <typename T = void> T set_CATType(int32_t value) {
		return ((T (*)(BRChatMsgConfig*, int32_t))(Il2CppBase() + 0x2D45754))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(BRChatMsgConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x2D4575C))(this, bytes, position);
	}

};

}

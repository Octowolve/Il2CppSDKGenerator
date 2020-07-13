#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DefaultChatMessageConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DefaultChatMessageConfConfig"));
	}

	template <typename T = Il2CppString*> T& ModeType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Description() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChatMsgList1() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChatMsgList2() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChatMsgList3() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ChatMsgList4() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x4640828))(this);
	}
	template <typename T = Il2CppString*> T get_ModeType() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x46408C8))(this);
	}
	template <typename T = void> T set_ModeType(Il2CppString* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppString*))(Il2CppBase() + 0x46408D0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Description() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x46408D8))(this);
	}
	template <typename T = void> T set_Description(Il2CppString* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppString*))(Il2CppBase() + 0x46408E0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChatMsgList1() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x46408E8))(this);
	}
	template <typename T = void> T set_ChatMsgList1(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x46408F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChatMsgList2() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x46408F8))(this);
	}
	template <typename T = void> T set_ChatMsgList2(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4640900))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChatMsgList3() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x4640908))(this);
	}
	template <typename T = void> T set_ChatMsgList3(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4640910))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ChatMsgList4() {
		return ((T (*)(DefaultChatMessageConfConfig*))(Il2CppBase() + 0x4640918))(this);
	}
	template <typename T = void> T set_ChatMsgList4(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4640920))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DefaultChatMessageConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4640928))(this, bytes, position);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class RoundAttachmentConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "RoundAttachmentConfConfig"));
	}

	template <typename T = int32_t> T& FireArmType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& AttachmentID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& AttachmentType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_FireArmType() {
		return ((T (*)(RoundAttachmentConfConfig*))(Il2CppBase() + 0x30DB350))(this);
	}
	template <typename T = void> T set_FireArmType(int32_t value) {
		return ((T (*)(RoundAttachmentConfConfig*, int32_t))(Il2CppBase() + 0x30DB358))(this, value);
	}
	template <typename T = int32_t> T get_AttachmentID() {
		return ((T (*)(RoundAttachmentConfConfig*))(Il2CppBase() + 0x30DB360))(this);
	}
	template <typename T = void> T set_AttachmentID(int32_t value) {
		return ((T (*)(RoundAttachmentConfConfig*, int32_t))(Il2CppBase() + 0x30DB368))(this, value);
	}
	template <typename T = int32_t> T get_Weight() {
		return ((T (*)(RoundAttachmentConfConfig*))(Il2CppBase() + 0x30DB370))(this);
	}
	template <typename T = void> T set_Weight(int32_t value) {
		return ((T (*)(RoundAttachmentConfConfig*, int32_t))(Il2CppBase() + 0x30DB378))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(RoundAttachmentConfConfig*))(Il2CppBase() + 0x30DB380))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(RoundAttachmentConfConfig*, Il2CppString*))(Il2CppBase() + 0x30DB388))(this, value);
	}
	template <typename T = int32_t> T get_AttachmentType() {
		return ((T (*)(RoundAttachmentConfConfig*))(Il2CppBase() + 0x30DB390))(this);
	}
	template <typename T = void> T set_AttachmentType(int32_t value) {
		return ((T (*)(RoundAttachmentConfConfig*, int32_t))(Il2CppBase() + 0x30DB398))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(RoundAttachmentConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30DB3A0))(this, bytes, position);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class Cookie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "Cookie"));
	}

	template <typename T = Il2CppString*> T& comment() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& commentUri() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& discard() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& domain() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& expires() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& httpOnly() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& port() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ports() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& secure() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& timestamp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& val() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& reservedCharsName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& portSeparators() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& tspecials() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& exact_domain() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = Il2CppString*> T get_Comment() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42B9DC4))(this);
	}
	template <typename T = void> T set_Comment(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42B9DCC))(this, value);
	}
	template <typename T = uintptr_t> T get_CommentUri() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42B9EA0))(this);
	}
	template <typename T = void> T set_CommentUri(uintptr_t value) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x42B9EA8))(this, value);
	}
	template <typename T = bool> T get_Discard() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42B9EB0))(this);
	}
	template <typename T = void> T set_Discard(bool value) {
		return ((T (*)(Cookie*, bool))(Il2CppBase() + 0x42B9EB8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Domain() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42B9EC0))(this);
	}
	template <typename T = void> T set_Domain(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42B9EC8))(this, value);
	}
	template <typename T = bool> T get_ExactDomain() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA044))(this);
	}
	template <typename T = void> T set_ExactDomain(bool value) {
		return ((T (*)(Cookie*, bool))(Il2CppBase() + 0x42BA03C))(this, value);
	}
	template <typename T = bool> T get_Expired() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA04C))(this);
	}
	template <typename T = uintptr_t> T get_Expires() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA1DC))(this);
	}
	template <typename T = void> T set_Expires(uintptr_t value) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x42BA1EC))(this, value);
	}
	template <typename T = bool> T get_HttpOnly() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA204))(this);
	}
	template <typename T = void> T set_HttpOnly(bool value) {
		return ((T (*)(Cookie*, bool))(Il2CppBase() + 0x42BA20C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA214))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42B9990))(this, value);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA224))(this);
	}
	template <typename T = void> T set_Path(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42BA2E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_Port() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA3B8))(this);
	}
	template <typename T = void> T set_Port(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42BA3C0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Ports() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA8CC))(this);
	}
	template <typename T = bool> T get_Secure() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA8D4))(this);
	}
	template <typename T = void> T set_Secure(bool value) {
		return ((T (*)(Cookie*, bool))(Il2CppBase() + 0x42BA8DC))(this, value);
	}
	template <typename T = uintptr_t> T get_TimeStamp() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA8E4))(this);
	}
	template <typename T = Il2CppString*> T get_Value() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA8F4))(this);
	}
	template <typename T = void> T set_Value(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42B9B94))(this, value);
	}
	template <typename T = int32_t> T get_Version() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BA8FC))(this);
	}
	template <typename T = void> T set_Version(int32_t value) {
		return ((T (*)(Cookie*, int32_t))(Il2CppBase() + 0x42BA8BC))(this, value);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x42BA904))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BAC6C))(this);
	}
	template <typename T = int32_t> static T hash(int32_t i, int32_t j, int32_t k, int32_t l, int32_t m) {
		return ((T (*)(void *, int32_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x42BADF8))(0, i, j, k, l, m);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BAE38))(this);
	}
	template <typename T = Il2CppString*> T ToString_1(uintptr_t uri) {
		return ((T (*)(Cookie*, uintptr_t))(Il2CppBase() + 0x42BAE40))(this, uri);
	}
	template <typename T = Il2CppString*> T ToClientString() {
		return ((T (*)(Cookie*))(Il2CppBase() + 0x42BB2F0))(this);
	}
	template <typename T = Il2CppString*> T QuotedString(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42BB614))(this, value);
	}
	template <typename T = bool> T IsToken(Il2CppString* value) {
		return ((T (*)(Cookie*, Il2CppString*))(Il2CppBase() + 0x42BB750))(this, value);
	}
	template <typename T = bool> static T IsNullOrEmpty(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x42BA008))(0, s);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdWildcard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdWildcard"));
	}

	template <typename T = uintptr_t> T& xsobj() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ResolvedProcessing() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& TargetNamespace() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SkipCompile() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& HasValueAny() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& HasValueLocal() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& HasValueOther() {
		return *(T*)((uintptr_t)this + 0x17);
	}
	template <typename T = bool> T& HasValueTargetNamespace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ResolvedNamespaces() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(XsdWildcard*))(Il2CppBase() + 0x2A7EAE8))(this);
	}
	template <typename T = void> T Compile(Il2CppString* nss, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XsdWildcard*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7EB80))(this, nss, h, schema);
	}
	template <typename T = bool> T ExamineAttributeWildcardIntersection(uintptr_t other, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XsdWildcard*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7F208))(this, other, h, schema);
	}
	template <typename T = bool> T ValidateWildcardAllowsNamespaceName(Il2CppString* ns, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XsdWildcard*, Il2CppString*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2A7F934))(this, ns, h, schema, raiseError);
	}
	template <typename T = void> T ValidateWildcardSubset(uintptr_t other, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XsdWildcard*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A7FC30))(this, other, h, schema);
	}
	template <typename T = bool> T ValidateWildcardSubset_1(uintptr_t other, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(XsdWildcard*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2A7FC50))(this, other, h, schema, raiseError);
	}

};

}

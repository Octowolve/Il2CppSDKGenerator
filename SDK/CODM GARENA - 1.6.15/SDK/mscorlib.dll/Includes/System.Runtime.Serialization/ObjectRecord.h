#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ObjectRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ObjectRecord"));
	}

	template <typename T = uintptr_t> T& Status() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& OriginalObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ObjectInstance() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& ObjectID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Info() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& IdOfContainingObj() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& Surrogate() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SurrogateSelector() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& Member() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ArrayIndex() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& FixupChainAsContainer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& FixupChainAsRequired() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& Next() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T SetMemberValue(uintptr_t manager, uintptr_t member, uintptr_t value) {
		return ((T (*)(ObjectRecord*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x302F7E8))(this, manager, member, value);
	}
	template <typename T = void> T SetArrayValue(uintptr_t manager, uintptr_t value, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(ObjectRecord*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x302CAF8))(this, manager, value, indices);
	}
	template <typename T = void> T SetMemberValue_1(uintptr_t manager, Il2CppString* memberName, uintptr_t value) {
		return ((T (*)(ObjectRecord*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x302FA90))(this, manager, memberName, value);
	}
	template <typename T = bool> T get_IsInstanceReady() {
		return ((T (*)(ObjectRecord*))(Il2CppBase() + 0x302FB90))(this);
	}
	template <typename T = bool> T get_IsUnsolvedObjectReference() {
		return ((T (*)(ObjectRecord*))(Il2CppBase() + 0x302D36C))(this);
	}
	template <typename T = bool> T get_IsRegistered() {
		return ((T (*)(ObjectRecord*))(Il2CppBase() + 0x302E5C0))(this);
	}
	template <typename T = bool> T DoFixups(bool asContainer, uintptr_t manager, bool strict) {
		return ((T (*)(ObjectRecord*, bool, uintptr_t, bool))(Il2CppBase() + 0x302D380))(this, asContainer, manager, strict);
	}
	template <typename T = void> T RemoveFixup(uintptr_t fixupToRemove, bool asContainer) {
		return ((T (*)(ObjectRecord*, uintptr_t, bool))(Il2CppBase() + 0x302FC7C))(this, fixupToRemove, asContainer);
	}
	template <typename T = void> T UnchainFixup(uintptr_t fixup, uintptr_t prevFixup, bool asContainer) {
		return ((T (*)(ObjectRecord*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x302FC20))(this, fixup, prevFixup, asContainer);
	}
	template <typename T = void> T ChainFixup(uintptr_t fixup, bool asContainer) {
		return ((T (*)(ObjectRecord*, uintptr_t, bool))(Il2CppBase() + 0x302EC44))(this, fixup, asContainer);
	}
	template <typename T = bool> T LoadData(uintptr_t manager, uintptr_t selector, uintptr_t context) {
		return ((T (*)(ObjectRecord*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x302D468))(this, manager, selector, context);
	}
	template <typename T = bool> T get_HasPendingFixups() {
		return ((T (*)(ObjectRecord*))(Il2CppBase() + 0x302FC10))(this);
	}

};

}

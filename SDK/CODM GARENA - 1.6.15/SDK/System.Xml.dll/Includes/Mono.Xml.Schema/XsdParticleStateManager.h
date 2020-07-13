#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml.Schema {

class XsdParticleStateManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml.Schema", "XsdParticleStateManager"));
	}

	template <typename T = uintptr_t> T& table() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& processContents() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& CurrentElement() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ContextStack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& Context() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> T get_ProcessContents() {
		return ((T (*)(XsdParticleStateManager*))(Il2CppBase() + 0x2A6DBBC))(this);
	}
	template <typename T = void> T PushContext() {
		return ((T (*)(XsdParticleStateManager*))(Il2CppBase() + 0x2A6DBC4))(this);
	}
	template <typename T = void> T PopContext() {
		return ((T (*)(XsdParticleStateManager*))(Il2CppBase() + 0x2A6DC20))(this);
	}
	template <typename T = void> T SetProcessContents(uintptr_t value) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6DCCC))(this, value);
	}
	template <typename T = uintptr_t> T Create(uintptr_t xsobj) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6DCD4))(this, xsobj);
	}
	template <typename T = uintptr_t> T MakeSequence(uintptr_t head, uintptr_t rest) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6E458))(this, head, rest);
	}
	template <typename T = uintptr_t> T AddElement(uintptr_t element) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6E0BC))(this, element);
	}
	template <typename T = uintptr_t> T AddSequence(uintptr_t sequence) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6E158))(this, sequence);
	}
	template <typename T = uintptr_t> T AddChoice(uintptr_t choice) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6E1F0))(this, choice);
	}
	template <typename T = uintptr_t> T AddAll(uintptr_t all) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6E28C))(this, all);
	}
	template <typename T = uintptr_t> T AddAny(uintptr_t any) {
		return ((T (*)(XsdParticleStateManager*, uintptr_t))(Il2CppBase() + 0x2A6E328))(this, any);
	}
	template <typename T = uintptr_t> T AddEmpty() {
		return ((T (*)(XsdParticleStateManager*))(Il2CppBase() + 0x2A6E3C4))(this);
	}

};

}

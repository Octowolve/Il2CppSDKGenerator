#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Xml {

class DTDContentModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "Mono.Xml", "DTDContentModel"));
	}

	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& compiledAutomata() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& ownerElementName() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& elementName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& orderType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& childModels() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& occurence() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_ChildModels() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11ADC))(this);
	}
	template <typename T = uintptr_t> T get_ElementDecl() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11AE4))(this);
	}
	template <typename T = Il2CppString*> T get_ElementName() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B28))(this);
	}
	template <typename T = void> T set_ElementName(Il2CppString* value) {
		return ((T (*)(DTDContentModel*, Il2CppString*))(Il2CppBase() + 0x4E11B30))(this, value);
	}
	template <typename T = uintptr_t> T get_Occurence() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B38))(this);
	}
	template <typename T = void> T set_Occurence(uintptr_t value) {
		return ((T (*)(DTDContentModel*, uintptr_t))(Il2CppBase() + 0x4E11B40))(this, value);
	}
	template <typename T = uintptr_t> T get_OrderType() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B48))(this);
	}
	template <typename T = void> T set_OrderType(uintptr_t value) {
		return ((T (*)(DTDContentModel*, uintptr_t))(Il2CppBase() + 0x4E11B50))(this, value);
	}
	template <typename T = uintptr_t> T GetAutomata() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B58))(this);
	}
	template <typename T = uintptr_t> T Compile() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B80))(this);
	}
	template <typename T = uintptr_t> T CompileInternal() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11B98))(this);
	}
	template <typename T = uintptr_t> T GetBasicContentAutomata() {
		return ((T (*)(DTDContentModel*))(Il2CppBase() + 0x4E11DA8))(this);
	}
	template <typename T = uintptr_t> T Sequence(uintptr_t l, uintptr_t r) {
		return ((T (*)(DTDContentModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E122C4))(this, l, r);
	}
	template <typename T = uintptr_t> T Choice(uintptr_t l, uintptr_t r) {
		return ((T (*)(DTDContentModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4E1212C))(this, l, r);
	}

};

}

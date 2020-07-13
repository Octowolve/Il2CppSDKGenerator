#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaException"));
	}

	template <typename T = bool> T& hasLineInfo() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& lineNumber() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& linePosition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& sourceObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& sourceUri() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = Il2CppString*> static T GetMessage(Il2CppString* message, Il2CppString* sourceUri, uintptr_t sender, uintptr_t sourceObj) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD15F0))(0, message, sourceUri, sender, sourceObj);
	}
	template <typename T = Il2CppString*> static T GetMessage_1(Il2CppString* message, Il2CppString* sourceUri, int32_t lineNumber, int32_t linePosition, uintptr_t sourceObj) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2AD11B8))(0, message, sourceUri, lineNumber, linePosition, sourceObj);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(XmlSchemaException*))(Il2CppBase() + 0x2AD17F4))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(XmlSchemaException*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2AD17FC))(this, info, context);
	}

};

}

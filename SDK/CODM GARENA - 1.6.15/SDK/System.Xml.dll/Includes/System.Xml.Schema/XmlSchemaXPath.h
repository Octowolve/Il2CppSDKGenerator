#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Schema {

class XmlSchemaXPath
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Schema", "XmlSchemaXPath"));
	}

	template <typename T = Il2CppString*> T& xpath() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& nsmgr() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& isSelector() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& compiledExpression() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& currentPath() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map3C() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T get_XPath() {
		return ((T (*)(XmlSchemaXPath*))(Il2CppBase() + 0x37BB900))(this);
	}
	template <typename T = int32_t> T Compile(uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaXPath*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BB908))(this, h, schema);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_CompiledExpression() {
		return ((T (*)(XmlSchemaXPath*))(Il2CppBase() + 0x37BC060))(this);
	}
	template <typename T = void> T ParseExpression(Il2CppString* xpath, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaXPath*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BBF04))(this, xpath, h, schema);
	}
	template <typename T = void> T ParsePath(Il2CppString* xpath, int32_t pos, uintptr_t paths, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaXPath*, Il2CppString*, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BC068))(this, xpath, pos, paths, h, schema);
	}
	template <typename T = void> T ParseStep(Il2CppString* xpath, int32_t pos, uintptr_t steps, uintptr_t paths, uintptr_t h, uintptr_t schema) {
		return ((T (*)(XmlSchemaXPath*, Il2CppString*, int32_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x37BC274))(this, xpath, pos, steps, paths, h, schema);
	}
	template <typename T = int32_t> T SkipWhitespace(Il2CppString* xpath, int32_t pos) {
		return ((T (*)(XmlSchemaXPath*, Il2CppString*, int32_t))(Il2CppBase() + 0x37BC1FC))(this, xpath, pos);
	}
	template <typename T = uintptr_t> static T Read(uintptr_t reader, uintptr_t h, Il2CppString* name) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x37B74D0))(0, reader, h, name);
	}

};

}

#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class ConfigHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "ConfigHandler"));
	}

	template <typename T = uintptr_t> T& typeEntries() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& channelInstances() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& currentChannel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& currentProviderData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& currentClientUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& appName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& currentXmlPath() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& onlyDelayedChannels() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map27() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map28() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T ValidatePath(Il2CppString* element, Il2CppArray<uintptr_t>* paths) {
		return ((T (*)(ConfigHandler*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B229AC))(this, element, paths);
	}
	template <typename T = bool> T CheckPath(Il2CppString* path) {
		return ((T (*)(ConfigHandler*, Il2CppString*))(Il2CppBase() + 0x4B22B20))(this, path);
	}
	template <typename T = void> T OnStartParsing(uintptr_t parser) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B22CBC))(this, parser);
	}
	template <typename T = void> T OnProcessingInstruction(Il2CppString* name, Il2CppString* text) {
		return ((T (*)(ConfigHandler*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4B22CC0))(this, name, text);
	}
	template <typename T = void> T OnIgnorableWhitespace(Il2CppString* s) {
		return ((T (*)(ConfigHandler*, Il2CppString*))(Il2CppBase() + 0x4B22CC4))(this, s);
	}
	template <typename T = void> T OnStartElement(Il2CppString* name, uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B22CC8))(this, name, attrs);
	}
	template <typename T = void> T ParseElement(Il2CppString* name, uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B22F78))(this, name, attrs);
	}
	template <typename T = void> T OnEndElement(Il2CppString* name) {
		return ((T (*)(ConfigHandler*, Il2CppString*))(Il2CppBase() + 0x4B270CC))(this, name);
	}
	template <typename T = void> T ReadCustomProviderData(Il2CppString* name, uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B24774))(this, name, attrs);
	}
	template <typename T = void> T ReadLifetine(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B24B8C))(this, attrs);
	}
	template <typename T = uintptr_t> T ParseTime(Il2CppString* s) {
		return ((T (*)(ConfigHandler*, Il2CppString*))(Il2CppBase() + 0x4B2717C))(this, s);
	}
	template <typename T = void> T ReadChannel(uintptr_t attrs, bool isTemplate) {
		return ((T (*)(ConfigHandler*, uintptr_t, bool))(Il2CppBase() + 0x4B253D8))(this, attrs, isTemplate);
	}
	template <typename T = uintptr_t> T ReadProvider(Il2CppString* name, uintptr_t attrs, bool isTemplate) {
		return ((T (*)(ConfigHandler*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x4B259B8))(this, name, attrs, isTemplate);
	}
	template <typename T = void> T ReadClientActivated(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B26530))(this, attrs);
	}
	template <typename T = void> T ReadServiceActivated(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B26704))(this, attrs);
	}
	template <typename T = void> T ReadClientWellKnown(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B26160))(this, attrs);
	}
	template <typename T = void> T ReadServiceWellKnown(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B26278))(this, attrs);
	}
	template <typename T = void> T ReadInteropXml(uintptr_t attrs, bool isElement) {
		return ((T (*)(ConfigHandler*, uintptr_t, bool))(Il2CppBase() + 0x4B267FC))(this, attrs, isElement);
	}
	template <typename T = void> T ReadPreload(uintptr_t attrs) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B26A98))(this, attrs);
	}
	template <typename T = Il2CppString*> T GetNotNull(uintptr_t attrs, Il2CppString* name) {
		return ((T (*)(ConfigHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4B27CAC))(this, attrs, name);
	}
	template <typename T = Il2CppString*> T ExtractAssembly(uintptr_t type) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B27EB4))(this, type);
	}
	template <typename T = void> T OnChars(Il2CppString* ch) {
		return ((T (*)(ConfigHandler*, Il2CppString*))(Il2CppBase() + 0x4B29070))(this, ch);
	}
	template <typename T = void> T OnEndParsing(uintptr_t parser) {
		return ((T (*)(ConfigHandler*, uintptr_t))(Il2CppBase() + 0x4B29074))(this, parser);
	}

};

}

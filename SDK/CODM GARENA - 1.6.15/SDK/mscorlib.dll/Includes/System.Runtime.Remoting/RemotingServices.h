#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class RemotingServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "RemotingServices"));
	}

	template <typename T = uintptr_t> static T& uri_hash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _serializationFormatter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _deserializationFormatter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& app_id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& next_id() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& methodBindings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& FieldSetterMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& FieldGetterMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> static T GetVirtualMethod(uintptr_t type, uintptr_t method) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B38BB0))(0, type, method);
	}
	template <typename T = bool> static T IsTransparentProxy(uintptr_t proxy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2B4DC))(0, proxy);
	}
	template <typename T = uintptr_t> static T GetServerTypeForUri(Il2CppString* URI) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B38424))(0, URI);
	}
	template <typename T = uintptr_t> static T Unmarshal(uintptr_t objectRef) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3F320))(0, objectRef);
	}
	template <typename T = uintptr_t> static T Unmarshal_1(uintptr_t objectRef, bool fRefine) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4B41AA4))(0, objectRef, fRefine);
	}
	template <typename T = uintptr_t> static T Marshal(uintptr_t Obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B42254))(0, Obj);
	}
	template <typename T = uintptr_t> static T Marshal_1(uintptr_t Obj, Il2CppString* ObjURI, uintptr_t RequestedType) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B42304))(0, Obj, ObjURI, RequestedType);
	}
	template <typename T = Il2CppString*> static T NewUri() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B42898))(0);
	}
	template <typename T = uintptr_t> static T GetRealProxy(uintptr_t proxy) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B2B4E4))(0, proxy);
	}
	template <typename T = uintptr_t> static T GetMethodBaseFromMethodMessage(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B38BBC))(0, msg);
	}
	template <typename T = uintptr_t> static T GetMethodBaseFromName(uintptr_t type, Il2CppString* methodName, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B3878C))(0, type, methodName, signature);
	}
	template <typename T = uintptr_t> static T FindInterfaceMethod(uintptr_t type, Il2CppString* methodName, Il2CppArray<uintptr_t>* signature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B435C0))(0, type, methodName, signature);
	}
	template <typename T = void> static T GetObjectData(uintptr_t obj, uintptr_t info, uintptr_t context) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3CAA4))(0, obj, info, context);
	}
	template <typename T = bool> static T IsMethodOverloaded(uintptr_t msg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B437C0))(0, msg);
	}
	template <typename T = bool> static T IsOneWay(uintptr_t method) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3C5F8))(0, method);
	}
	template <typename T = uintptr_t> static T CreateClientProxy(uintptr_t entry, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1B0C8))(0, entry, activationAttributes);
	}
	template <typename T = uintptr_t> static T CreateClientProxy_1(uintptr_t objectType, Il2CppString* url, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1ACC4))(0, objectType, url, activationAttributes);
	}
	template <typename T = uintptr_t> static T CreateClientProxyForContextBound(uintptr_t type, Il2CppArray<uintptr_t>* activationAttributes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4B1B250))(0, type, activationAttributes);
	}
	template <typename T = uintptr_t> static T GetIdentityForUri(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B41810))(0, uri);
	}
	template <typename T = Il2CppString*> static T RemoveAppNameFromUri(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B43C00))(0, uri);
	}
	template <typename T = uintptr_t> static T GetOrCreateClientIdentity(uintptr_t objRef, uintptr_t proxyType, uintptr_t* clientProxy) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B43D7C))(0, objRef, proxyType, clientProxy);
	}
	template <typename T = uintptr_t> static T GetClientChannelSinkChain(Il2CppString* url, uintptr_t channelData, uintptr_t* objectUri) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4B4399C))(0, url, channelData, objectUri);
	}
	template <typename T = uintptr_t> static T CreateClientActivatedServerIdentity(uintptr_t realObject, uintptr_t objectType, Il2CppString* objectUri) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4B43434))(0, realObject, objectType, objectUri);
	}
	template <typename T = uintptr_t> static T CreateWellKnownServerIdentity(uintptr_t objectType, Il2CppString* objectUri, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B411E4))(0, objectType, objectUri, mode);
	}
	template <typename T = void> static T RegisterServerIdentity(uintptr_t identity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B42C08))(0, identity);
	}
	template <typename T = uintptr_t> static T GetProxyForRemoteObject(uintptr_t objref, uintptr_t classToProxy) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B3F78C))(0, objref, classToProxy);
	}
	template <typename T = uintptr_t> static T GetRemoteObject(uintptr_t objRef, uintptr_t proxyType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B41E04))(0, objRef, proxyType);
	}
	template <typename T = void> static T RegisterInternalChannels() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B41778))(0);
	}
	template <typename T = void> static T DisposeIdentity(uintptr_t ident) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B22324))(0, ident);
	}
	template <typename T = Il2CppString*> static T GetNormalizedUri(Il2CppString* uri) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B43B44))(0, uri);
	}

};

}

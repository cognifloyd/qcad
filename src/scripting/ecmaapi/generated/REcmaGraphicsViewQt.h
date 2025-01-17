// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #ifndef RECMAGRAPHICSVIEWQT_H
        #define RECMAGRAPHICSVIEWQT_H

        #include "ecmaapi_global.h"

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "REcmaShellGraphicsViewQt.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class
        
        QCADECMAAPI_EXPORT
        REcmaGraphicsViewQt {

        public:
      static  void initEcma(QScriptEngine& engine, QScriptValue* proto 
    =NULL
    ) 
    ;static  QScriptValue createEcma(QScriptContext* context, QScriptEngine* engine) 
    ;

    // conversion functions for base classes:
    static  QScriptValue getQWidget(QScriptContext *context,
            QScriptEngine *engine)
        ;

    // returns class name:
    static  QScriptValue getClassName(QScriptContext *context, QScriptEngine *engine) 
        ;

    // returns all base classes (in case of multiple inheritance):
    static  QScriptValue getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        ;

    // properties:
    

    // public methods:
    static  QScriptValue
        setImageView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getImageView
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        disableGestures
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        removeFocus
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getWidth
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getHeight
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getRect
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setSignalsBlocked
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        getCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setCursor
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        setFocusFrameWidget
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        simulateMouseMoveEvent
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue
        sizeHint
        (QScriptContext* context, QScriptEngine* engine) 
        ;static  QScriptValue toString
    (QScriptContext *context, QScriptEngine *engine)
    ;static  QScriptValue destroy(QScriptContext *context, QScriptEngine *engine)
    ;static RGraphicsViewQt* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellGraphicsViewQt* getSelfShell(const QString& fName, QScriptContext* context)
    ;static  void fromScriptValue(const QScriptValue& value,
        RGraphicsViewQt*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RGraphicsViewQt*>(o);
        }
    static  QScriptValue toScriptValue(QScriptEngine *engine,
        RGraphicsViewQt*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    };
    #endif
    